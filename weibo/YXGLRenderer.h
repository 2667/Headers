//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPTFastRenderer, UIView;

@interface YXGLRenderer : NSObject
{
    MPTFastRenderer *renderer;
}

+ (id)sharedRenderer;
- (void).cxx_destruct;
- (void)setRenderViewFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *renderView;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 withTrackingRet:(id)arg2;
- (void)loadResource:(id)arg1;
- (void)setCameraInputPosition:(long long)arg1;
- (void)setup;
- (id)init;

@end

