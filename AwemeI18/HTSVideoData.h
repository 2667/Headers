//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class HTSEffectManager, HTSTimeMachine, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HTSVideoData : NSObject <NSCopying>
{
    void *operationQueueKey;
    _Bool _isMicMuted;
    _Bool _isRecordFromCamera;
    _Bool _isARVideo;
    int _videoFrameRate;
    int _previewFrameRate;
    NSString *_identifier;
    unsigned long long _bitRate;
    NSMutableArray *_videoAssets;
    NSMutableDictionary *_videoDuration;
    NSMutableDictionary *_draftFileList;
    NSMutableDictionary *_urlDict;
    NSMutableDictionary *_videoTimeClipInfo;
    HTSEffectManager *_effectOperationManager;
    double _effectOperationStartTime;
    unsigned long long _currentEffectType;
    NSMutableDictionary *_videoTimeScaleInfo;
    double _recordRate;
    unsigned long long _videoFilter;
    NSMutableArray *_audioAssets;
    NSMutableDictionary *_audioTimeClipInfo;
    NSMutableArray *_extraMusicEffectInfo;
    NSMutableArray *_extraMusicEffectAsset;
    NSMutableDictionary *_photoAssetsInfo;
    NSMutableDictionary *_assetCropRectsInfo;
    NSMutableDictionary *_assetRotationsInfo;
    NSMutableDictionary *_textsInfo;
    NSMutableDictionary *_volumnInfo;
    HTSTimeMachine *_timeMachine;
    NSMutableDictionary *_extraInfo;
    NSMutableDictionary *_accelerateInfo;
    NSMutableDictionary *_metadataInfo;
    NSMutableDictionary *_lastMetadataInfo;
    double _currentTotalDuration;
    double _totalDurationWithTimeMachine;
    double _brightnessStrength;
    NSString *_musicID;
    NSString *_antiCheckingInfo;
    HTSVideoData *_previousData;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_semaphore> *_resourceSemaphore;
    long long _noLockOperationCount;
    struct CGSize _outputSize;
    CDStruct_1b6d18a9 _totalVideoDurationForMusically;
}

+ (void)clearAllCache;
+ (id)cacheDirPath;
+ (id)machineModel;
+ (id)stringFromDictionary:(id)arg1;
+ (id)videoData;
+ (void)deleteVideoDataFromDictionary:(id)arg1;
+ (void)loadVideoDataFromDictionary:(id)arg1 fileFolder:(id)arg2 withExistAssetUrlDict:(id)arg3 recursive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)deleteVideoDataAtFile:(id)arg1;
+ (void)loadVideoDataFromFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteVideoDataAtFileUsePropertyListSerialization:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)loadVideoDataFromFileUsePropertyListSerialization:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)readDictionaryFromPath:(id)arg1 error:(id)arg2;
+ (id)videoDataWithPreviousVideoData:(id)arg1;
@property(nonatomic) long long noLockOperationCount; // @synthesize noLockOperationCount=_noLockOperationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *resourceSemaphore; // @synthesize resourceSemaphore=_resourceSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) HTSVideoData *previousData; // @synthesize previousData=_previousData;
@property(retain, nonatomic) NSString *antiCheckingInfo; // @synthesize antiCheckingInfo=_antiCheckingInfo;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(nonatomic) double brightnessStrength; // @synthesize brightnessStrength=_brightnessStrength;
@property(nonatomic) _Bool isARVideo; // @synthesize isARVideo=_isARVideo;
@property(nonatomic) double totalDurationWithTimeMachine; // @synthesize totalDurationWithTimeMachine=_totalDurationWithTimeMachine;
@property(nonatomic) double currentTotalDuration; // @synthesize currentTotalDuration=_currentTotalDuration;
@property(retain, nonatomic) NSMutableDictionary *lastMetadataInfo; // @synthesize lastMetadataInfo=_lastMetadataInfo;
@property(nonatomic) _Bool isRecordFromCamera; // @synthesize isRecordFromCamera=_isRecordFromCamera;
@property(retain, nonatomic) NSMutableDictionary *metadataInfo; // @synthesize metadataInfo=_metadataInfo;
@property(retain, nonatomic) NSMutableDictionary *accelerateInfo; // @synthesize accelerateInfo=_accelerateInfo;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) HTSTimeMachine *timeMachine; // @synthesize timeMachine=_timeMachine;
@property(retain, nonatomic) NSMutableDictionary *volumnInfo; // @synthesize volumnInfo=_volumnInfo;
@property(retain, nonatomic) NSMutableDictionary *textsInfo; // @synthesize textsInfo=_textsInfo;
@property(retain, nonatomic) NSMutableDictionary *assetRotationsInfo; // @synthesize assetRotationsInfo=_assetRotationsInfo;
@property(retain, nonatomic) NSMutableDictionary *assetCropRectsInfo; // @synthesize assetCropRectsInfo=_assetCropRectsInfo;
@property(retain, nonatomic) NSMutableDictionary *photoAssetsInfo; // @synthesize photoAssetsInfo=_photoAssetsInfo;
@property(retain, nonatomic) NSMutableArray *extraMusicEffectAsset; // @synthesize extraMusicEffectAsset=_extraMusicEffectAsset;
@property(retain, nonatomic) NSMutableArray *extraMusicEffectInfo; // @synthesize extraMusicEffectInfo=_extraMusicEffectInfo;
@property(retain, nonatomic) NSMutableDictionary *audioTimeClipInfo; // @synthesize audioTimeClipInfo=_audioTimeClipInfo;
@property(retain, nonatomic) NSMutableArray *audioAssets; // @synthesize audioAssets=_audioAssets;
@property(nonatomic) _Bool isMicMuted; // @synthesize isMicMuted=_isMicMuted;
@property(nonatomic) unsigned long long videoFilter; // @synthesize videoFilter=_videoFilter;
@property(nonatomic) double recordRate; // @synthesize recordRate=_recordRate;
@property(nonatomic) int previewFrameRate; // @synthesize previewFrameRate=_previewFrameRate;
@property(nonatomic) int videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(retain, nonatomic) NSMutableDictionary *videoTimeScaleInfo; // @synthesize videoTimeScaleInfo=_videoTimeScaleInfo;
@property(nonatomic) unsigned long long currentEffectType; // @synthesize currentEffectType=_currentEffectType;
@property(nonatomic) double effectOperationStartTime; // @synthesize effectOperationStartTime=_effectOperationStartTime;
@property(retain, nonatomic) HTSEffectManager *effectOperationManager; // @synthesize effectOperationManager=_effectOperationManager;
@property(retain, nonatomic) NSMutableDictionary *videoTimeClipInfo; // @synthesize videoTimeClipInfo=_videoTimeClipInfo;
@property(retain) NSMutableDictionary *urlDict; // @synthesize urlDict=_urlDict;
@property(retain) NSMutableDictionary *draftFileList; // @synthesize draftFileList=_draftFileList;
@property(nonatomic) CDStruct_1b6d18a9 totalVideoDurationForMusically; // @synthesize totalVideoDurationForMusically=_totalVideoDurationForMusically;
@property(retain, nonatomic) NSMutableDictionary *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSMutableArray *videoAssets; // @synthesize videoAssets=_videoAssets;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) unsigned long long bitRate; // @synthesize bitRate=_bitRate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)initOperationQueue;
- (void)clearAllEffectAndTimeMachine;
- (void)clearReverseAsset;
- (void)unlock;
- (void)lockForOperation:(CDUnknownBlockType)arg1;
- (void)lockForOperationSync:(CDUnknownBlockType)arg1;
- (void)muteAllVideos;
- (void)muteMicrophone;
- (void)removeAudioAsset:(id)arg1;
- (void)removeVideoAsset:(id)arg1;
- (void)setMetaDatawithAsset:(id)arg1 isCropped:(_Bool)arg2;
- (void)setMetaData:(id)arg1 recordInfo:(long long)arg2 MD5:(id)arg3 needStore:(_Bool)arg4;
- (void)setMetaData:(id)arg1 recordInfo:(long long)arg2;
- (id)reloadAsset:(id)arg1;
- (_Bool)checkVideoAssets:(id *)arg1;
- (_Bool)checkVideoAssets;
- (id)volumeForAsset:(id)arg1;
- (CDStruct_e83c9415)audioTimeClipRangeForAsset:(id)arg1;
- (double)videoRateForAsset:(id)arg1;
- (CDStruct_e83c9415)videoTimeClipRangeForAsset:(id)arg1;
- (double)totalVideoDuration;
- (void)updateVideoDuration;
- (int)totalFrameNum;
- (_Bool)needReencode;
- (void)dealloc;
- (_Bool)verifyVideoData;
- (id)init;
- (void)saveVideoDataToPath:(id)arg1 withExistAssetUrlDict:(id)arg2 withExistUrlDict:(id)arg3 recursive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveVideoDataToPath:(id)arg1 withExistAssetUrlDict:(id)arg2 recursive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveVideoDataToFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveVideoDataToFileUsePropertyListSerialization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveDictionaryToPath:(id)arg1 dict:(id)arg2 error:(id)arg3;
- (void)copyInfoFromVideoData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nextStepVideoData;
- (id)rollbackVideoDataWithIdentifier:(id)arg1;
- (id)rollbackVideoData;

@end

