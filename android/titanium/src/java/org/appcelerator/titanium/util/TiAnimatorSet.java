package org.appcelerator.titanium.util;

import org.appcelerator.titanium.TiC;

import android.animation.AnimatorSet;
import android.annotation.TargetApi;
import android.os.Build;

@TargetApi(Build.VERSION_CODES.HONEYCOMB)
public class TiAnimatorSet extends TiAnimator {
	private AnimatorSet set;

	public TiAnimatorSet() {
		
		if (Build.VERSION.SDK_INT >= TiC.API_LEVEL_HONEYCOMB) {
			set = new AnimatorSet();
		}
	}

	public AnimatorSet set() {
		return set;
	}
	
	@Override
	protected void handleCancel() {
		super.handleCancel();
		set.cancel();
	}
	
	public void setAnimating (boolean value) {
		animating = value;
	}
	
	public boolean getAnimating () {
		return animating;
	}
}