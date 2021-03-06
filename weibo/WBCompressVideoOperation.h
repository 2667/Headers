//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBQueueOperation.h"

#import "WBAssetExportSessionDelegate-Protocol.h"

@class AVAsset, AVAssetExportSession, AVAssetTrack, AVAudioMix, GPUImageMovie, GPUImageMovieWriter, GPUImageTransformFilter, NSMutableDictionary, NSString, WBAssetExportSession, WBMediaEditorCache, WBQueueJob;
@protocol WBMediaUpload;

@interface WBCompressVideoOperation : WBQueueOperation <WBAssetExportSessionDelegate>
{
    WBAssetExportSession *exportSession;
    GPUImageMovieWriter *movieWriter;
    GPUImageMovie *movieFile;
    GPUImageTransformFilter *filter;
    AVAssetTrack *videoTrack;
    AVAssetExportSession *livePhotoVideoSession;
    AVAsset *asset;
    AVAudioMix *audioMix;
    NSMutableDictionary *compressLogs;
    NSMutableDictionary *media_edit_logs;
    WBMediaEditorCache *_mediaCache;
    NSString *_compressedVideoPath;
    NSString *_uniquePathValue;
}

+ (_Bool)logEnabled;
+ (long long)operationType;
@property(copy, nonatomic) NSString *uniquePathValue; // @synthesize uniquePathValue=_uniquePathValue;
@property(retain, nonatomic) NSString *compressedVideoPath; // @synthesize compressedVideoPath=_compressedVideoPath;
@property(readonly, nonatomic) WBMediaEditorCache *mediaCache; // @synthesize mediaCache=_mediaCache;
- (void).cxx_destruct;
- (void)exportSession:(id)arg1 compressProgress:(double)arg2;
- (_Bool)isLivePhoto;
- (void)cancel;
- (id)tempFinalVideoPath;
- (id)finalVideoPath;
- (id)livephotoVideoPath;
- (id)baseFinalVideoPath;
- (id)tempCacheFullPath;
- (id)tempFullPath;
- (void)doCompletion;
- (void)checkLivephotoVideoSessionResult;
- (void)checkExportSessionResult;
- (void)processVideoClipsIfNeed:(CDUnknownBlockType)arg1;
- (void)getVideoAVAssetFromLibrary;
- (void)getLivePhotoAVAsset;
- (void)getAVAssetFromMediaCache;
- (void)executeRequestWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) WBQueueJob<WBMediaUpload> *job;
- (id)initWithJob:(id)arg1 mediaCache:(id)arg2;
- (void)dealloc;
- (id)operationTypeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

