//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneLayer.h"

@interface FMSceneBridgeLayer : FMSceneLayer
{
    long long _cameraPosition;
}

@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (void)onCameraPositionChanged:(_Bool)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
- (id)init;

@end
