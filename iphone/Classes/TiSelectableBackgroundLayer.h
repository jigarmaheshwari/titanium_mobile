#import <QuartzCore/QuartzCore.h>

@class TiGradient;
@class TiSVGImage;
@interface TiDrawable : NSObject
{
    NSArray* states;
    UIColor* color;
    UIImage* image;
    TiSVGImage* svg;
    TiGradient* gradient;
    BOOL imageRepeat;
}
@property(nonatomic,retain) UIColor *color;
@property(nonatomic,retain) UIImage *image;
@property(nonatomic,retain) TiGradient *gradient;
@property(nonatomic,retain) TiSVGImage *svg;
@property(nonatomic,assign) BOOL imageRepeat;
@end

@interface TiSelectableBackgroundLayer : CALayer
{
    NSMutableDictionary* stateLayersMap;
    NSMutableArray* stateLayers;
    BOOL _imageRepeat;
    BOOL readyToCreateDrawables;
}
@property(nonatomic,assign) BOOL imageRepeat;
@property(nonatomic,readonly) NSDictionary *stateLayersMap;
@property(nonatomic,readonly) NSArray *stateLayers;
@property(nonatomic,assign) BOOL readyToCreateDrawables;
@property(nonatomic,assign) BOOL animateTransition;

//- (void)drawInContext:(CGContextRef)ctx inRect:(CGRect)rect;

- (void)setState:(UIControlState)state;
- (void)setState:(UIControlState)state animated:(BOOL)animated;
- (UIControlState)getState;
-(TiDrawable*) getOrCreateDrawableForState:(UIControlState)state;
- (void)setColor:(UIColor*)color forState:(UIControlState)state;
- (void)setImage:(id)image forState:(UIControlState)state;
- (void)setGradient:(TiGradient*)gradient forState:(UIControlState)state;
//-(void) setHidden:(BOOL)hidden animated:(BOOL)animated;
@end
