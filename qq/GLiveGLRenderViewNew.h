//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/IGLiveRenderView-Protocol.h>

@class CAEAGLLayer, GLiveGLRender, NSString;

@interface GLiveGLRenderViewNew : UIView <IGLiveRenderView>
{
    CAEAGLLayer *_eaglLayer;
    unsigned int _colorRenderBuffer;
    unsigned int _frameBuffer;
    double _yRotateAngle;
    double _xRotateAngle;
    double _zRotateAngle;
    struct CGRect _rcViewport;
    struct CGSize _videoFrameSize;
    struct CGSize _viewSize;
    long long _videoSrcType;
    GLiveGLRender *_render;
    unsigned int _ctrlBits;
    unsigned int _sequence;
    double _lastFrameTime;
    double _contentScale;
}

- (void)destoryRenderAndFrameBuffer;
- (void)setVideoFrame:(id)arg1;
- (void)setupFrameAndRenderBuffer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
