//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMediaOperationContext.h"

#import "KSMediaOperationContextConcreteProtocol-Protocol.h"
#import "KSVideoOperationContext-Protocol.h"

@class GPUImageFilterPipeline, KSAttachmentAuidoMovie, KSMovieInfo, KSNoneBGMEffect, KSNoneFilterEffect, NSArray, NSObject, NSString, UIImage;
@protocol KSAttachmentAudioMedia, KSCloudBGMEffect, KSEffectProtocol, KSFileBGMEffect, KSLocalBGMEffect;

@interface KSVideoOperationContext : KSMediaOperationContext <KSVideoOperationContext, KSMediaOperationContextConcreteProtocol>
{
    KSMovieInfo *_videoInfo;
}

@property(readonly, nonatomic) KSMovieInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void).cxx_destruct;
- (void)setupVideoInfo;
@property(readonly, nonatomic) KSAttachmentAuidoMovie *movie;
- (id)initWithMovie:(id)arg1 gpuImageView:(id)arg2 maxTrimDuration:(double)arg3 videoInfo:(id)arg4 preview:(_Bool)arg5;

// Remaining properties
@property(readonly, nonatomic) id <KSEffectProtocol> beautyEffect;
@property(readonly, nonatomic) NSArray *bgmEffects;
@property(readonly, nonatomic) id <KSCloudBGMEffect> cloudBGMEffect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *filterEffects;
@property(readonly, nonatomic) GPUImageFilterPipeline *filterPipeline;
@property(readonly, nonatomic) UIImage *firstFrameImage;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <KSLocalBGMEffect> localBGMEffect;
@property(readonly, nonatomic) double maxTrimDuration;
@property(retain, nonatomic) NSObject<KSAttachmentAudioMedia> *media; // @dynamic media;
@property(readonly, nonatomic) KSNoneBGMEffect *noneBGMEffect;
@property(readonly, nonatomic) KSNoneFilterEffect *noneFilterEffect;
@property(readonly, nonatomic) id <KSEffectProtocol> originalAudioEffect;
@property(readonly, nonatomic) id <KSFileBGMEffect> recordBGMEffect;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <KSEffectProtocol> whitenEffect;

@end
