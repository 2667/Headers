//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ARRenderVideoViewDelegate-Protocol.h"
#import "Ant3DViewDelegate-Protocol.h"

@class ARParBundle, ARProgressIndicatorView, ARRender2DView, ARRenderBridge, ARRenderResourceConfig, ARRenderVideoView, Ant3DView, NSDictionary, NSString, UIView;

@interface ARRenderResource : NSObject <ARRenderVideoViewDelegate, Ant3DViewDelegate>
{
    _Bool _isPreviewMode;
    unsigned long long _type;
    long long _renderResourceState;
    ARRenderResourceConfig *_resourceConfig;
    NSString *_resSizeString;
    NSString *_resVersionString;
    NSDictionary *_bizVars;
    NSString *_cloudId;
    NSString *_cloudMD5;
    NSString *_resAppId;
    NSString *_openAppId;
    NSString *_parPath;
    NSString *_resPath;
    ARParBundle *_parBundle;
    Ant3DView *_render3DView;
    ARRender2DView *_render2DView;
    ARRenderVideoView *_renderVideoView;
    ARRenderBridge *_renderBridge;
    ARProgressIndicatorView *_indicator;
}

+ (id)renderResourceFromPar:(id)arg1;
+ (id)renderResourceFromPB:(id)arg1;
@property(retain, nonatomic) ARProgressIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) ARRenderBridge *renderBridge; // @synthesize renderBridge=_renderBridge;
@property(retain, nonatomic) ARRenderVideoView *renderVideoView; // @synthesize renderVideoView=_renderVideoView;
@property(retain, nonatomic) ARRender2DView *render2DView; // @synthesize render2DView=_render2DView;
@property(retain, nonatomic) Ant3DView *render3DView; // @synthesize render3DView=_render3DView;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(retain, nonatomic) ARParBundle *parBundle; // @synthesize parBundle=_parBundle;
@property(copy, nonatomic) NSString *resPath; // @synthesize resPath=_resPath;
@property(copy, nonatomic) NSString *parPath; // @synthesize parPath=_parPath;
@property(retain, nonatomic) NSString *openAppId; // @synthesize openAppId=_openAppId;
@property(retain, nonatomic) NSString *resAppId; // @synthesize resAppId=_resAppId;
@property(copy, nonatomic) NSString *cloudMD5; // @synthesize cloudMD5=_cloudMD5;
@property(copy, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(copy, nonatomic) NSDictionary *bizVars; // @synthesize bizVars=_bizVars;
@property(copy, nonatomic) NSString *resVersionString; // @synthesize resVersionString=_resVersionString;
@property(copy, nonatomic) NSString *resSizeString; // @synthesize resSizeString=_resSizeString;
@property(retain, nonatomic) ARRenderResourceConfig *resourceConfig; // @synthesize resourceConfig=_resourceConfig;
@property(nonatomic) long long renderResourceState; // @synthesize renderResourceState=_renderResourceState;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)previewWatermarkOnRenderView:(id)arg1;
- (void)showAlertViewMessage:(id)arg1 comfirmTitle:(id)arg2 comfirmBlock:(CDUnknownBlockType)arg3 cancleBlock:(CDUnknownBlockType)arg4;
- (void)onSwitchToTrackMode:(unsigned long long)arg1 fromOldMode:(unsigned long long)arg2;
- (void)onFirstFrame;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationBegin:(id)arg1;
- (void)onSceneTap:(id)arg1;
- (void)onInitError:(id)arg1;
- (id)detectResourceIn:(id)arg1 withSuffix:(id)arg2;
- (id)detectVideoResource:(id)arg1;
- (id)detectAnimationResource:(id)arg1;
- (id)detectSceneResource:(id)arg1;
- (void)startRenderBridge:(id)arg1 inView:(id)arg2;
- (id)getDeviceScreen;
- (id)getDeviceModel;
- (void)startAnimationInView:(id)arg1;
- (void)showUncompatiableAlert;
- (void)processParFile:(id)arg1 inView:(id)arg2;
- (void)downloadModelWithSuperView:(id)arg1;
- (void)startRenderInView:(id)arg1;
@property(readonly, nonatomic) UIView *currentRenderView;
- (_Bool)validatePar:(id)arg1 withMD5:(id)arg2;
- (id)parRootPath;
- (id)resRootPath;
- (id)rootPath;
- (void)stopRender;
- (void)dealloc;
- (void)exitAntRenderView;
- (id)init;
- (void)didAnimationEnd:(id)arg1;
- (void)didTapAnimationView:(id)arg1;
- (void)playAnt2DAnimationInView:(id)arg1;
- (void)videoPlayerDidClicked:(id)arg1;
- (void)videoPlayerDidFinishToEnd:(id)arg1;
- (void)playEmbedVideoInSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
