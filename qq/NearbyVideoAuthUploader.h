//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/BDHUploadDelegate-Protocol.h>

@class NSArray, NSData, NSString, VideoAuthImageInfo;

@interface NearbyVideoAuthUploader : NSObject <BDHUploadDelegate>
{
    NSData *_sessionKey;
    unsigned int _uploadTimestamp;
    CDUnknownBlockType _completeBlock;
    VideoAuthImageInfo *_imageInfo;
    NSArray *_videoInfoList;
    NSString *_headId;
    NSString *_videoId;
    long long _uploadTaskID;
    int _uploadingIndex;
    _Bool _isUploadingImage;
    _Bool _isCancel;
}

- (void).cxx_destruct;
- (void)handleRespDetail:(id)arg1;
- (void)notifyBDHCancel:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)completeResult:(_Bool)arg1 resultType:(long long)arg2 error:(id)arg3;
- (unsigned long long)uploadVideo:(id)arg1;
- (unsigned long long)uploadImage;
- (void)cancel;
- (void)startUploadResWithSessionKey:(id)arg1;
- (void)asyncRequestSessionKey;
- (void)startUploadWithImageInfo:(id)arg1 videoInfoList:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
