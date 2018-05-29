//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IESMediaTranscoder;

@interface AWEDynamicWaterMarkExporter : NSObject
{
    _Bool _appInBackground;
    _Bool _canceling;
    _Bool _needSaveToAlbum;
    IESMediaTranscoder *_transcoder;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
    double _progress;
    long long _backgroundCount;
    long long _retryCount;
    long long _status;
}

+ (id)defaultExporter;
+ (void)addWaterMarkWithUrl:(id)arg1 composeOptions:(long long)arg2 model:(id)arg3 needSaveToAlbum:(_Bool)arg4 userName:(id)arg5 videoOutputSize:(struct CGSize)arg6 cropData:(id)arg7 progress:(CDUnknownBlockType)arg8 complete:(CDUnknownBlockType)arg9 onlyForCrop:(_Bool)arg10;
+ (void)addBodydanceWaterMarkWithUrl:(id)arg1 needSaveToAlbum:(_Bool)arg2 scores:(long long)arg3 videoOutputSize:(struct CGSize)arg4 cropData:(id)arg5 progress:(CDUnknownBlockType)arg6 complete:(CDUnknownBlockType)arg7;
+ (id)getScoresWatermarkNumberImageForNumber:(long long)arg1;
+ (id)getWatermarkImageViewArrayForScores:(long long)arg1;
+ (id)generateImagesWithBodydanceScores:(long long)arg1 videoWidth:(double)arg2 videoHeight:(double)arg3;
+ (id)generateImagesWithUserName:(id)arg1 videoWidth:(double)arg2 videoHeight:(double)arg3 alignment:(unsigned long long)arg4;
@property(nonatomic) _Bool needSaveToAlbum; // @synthesize needSaveToAlbum=_needSaveToAlbum;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool canceling; // @synthesize canceling=_canceling;
@property(nonatomic) long long backgroundCount; // @synthesize backgroundCount=_backgroundCount;
@property(nonatomic) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) IESMediaTranscoder *transcoder; // @synthesize transcoder=_transcoder;
- (void).cxx_destruct;
- (void)appDidBecomeActiveNotification;
- (void)appWillResignActiveNotification;
- (void)addNotificationObservers;
- (void)__export;
- (void)export;
- (void)exportWithProgress:(CDUnknownBlockType)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)clearResource;
- (id)init;
- (void)dealloc;

@end

