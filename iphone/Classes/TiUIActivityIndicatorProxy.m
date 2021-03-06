/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#ifdef USE_TI_UIACTIVITYINDICATOR

#import "TiUIActivityIndicatorProxy.h"
#import "TiUIActivityIndicator.h"

@implementation TiUIActivityIndicatorProxy

+(NSSet*)transferableProperties
{
    NSSet *common = [TiViewProxy transferableProperties];
    return [common setByAddingObjectsFromSet:[NSSet setWithObjects:@"style",
                                              @"font", @"color", @"message", nil]];
}

-(NSMutableDictionary*)langConversionTable
{
    return [NSMutableDictionary dictionaryWithObject:@"message" forKey:@"messageid"];
}

-(NSString*)apiName
{
    return @"Ti.UI.ActivityIndicator";
}

-(TiDimension)defaultAutoWidthBehavior:(id)unused
{
    return TiDimensionAutoSize;
}
-(TiDimension)defaultAutoHeightBehavior:(id)unused
{
    return TiDimensionAutoSize;
}

USE_VIEW_FOR_CONTENT_SIZE

@end

#endif