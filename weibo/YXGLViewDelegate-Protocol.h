//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol YXGLViewDelegate
- (int)onGLViewPutVideoDataToEncode:(char *)arg1 size:(int)arg2 pts:(long long)arg3;
- (unsigned int)onGLViewDrawFramePreProcess:(struct __CVBuffer *)arg1 textureId:(unsigned int)arg2 cameraId:(int)arg3 pts:(CDStruct_1b6d18a9)arg4;
- (void)onRenderSuccess;
- (void)onGLViewDestory;
- (void)onGLViewCreated;
@end

