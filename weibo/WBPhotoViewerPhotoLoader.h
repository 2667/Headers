//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBPhotoViewerPhoto, WBTDASIHTTPRequest;

@interface WBPhotoViewerPhotoLoader : NSObject
{
    int _livePhotoRequestID;
    unsigned long long _livePhotoVideoTotalSize;
    unsigned long long _livePhotoImageTotalSize;
    unsigned long long _livePhotoVideoCurrentSize;
    unsigned long long _livePhotoImageCurrentSize;
    struct {
        unsigned int livePhotoVideoCompleted:1;
        unsigned int livePhotoImageCompleted:1;
    } _flag;
    WBTDASIHTTPRequest *_livePhotoVideoRequest;
    WBPhotoViewerPhoto *_photo;
    double _progress;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressImageBlock;
    CDUnknownBlockType _thumbnailImageBlock;
    CDUnknownBlockType _updatePaidInfoBlock;
}

@property(retain, nonatomic) WBTDASIHTTPRequest *livePhotoVideoRequest; // @synthesize livePhotoVideoRequest=_livePhotoVideoRequest;
@property(copy, nonatomic) CDUnknownBlockType updatePaidInfoBlock; // @synthesize updatePaidInfoBlock=_updatePaidInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType thumbnailImageBlock; // @synthesize thumbnailImageBlock=_thumbnailImageBlock;
@property(copy, nonatomic) CDUnknownBlockType progressImageBlock; // @synthesize progressImageBlock=_progressImageBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) WBPhotoViewerPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (_Bool)requestShouldHandleProgressImage:(id)arg1;
- (void)postLogWithLivePhotoVideoRequest:(id)arg1 isSuccess:(_Bool)arg2;
- (void)cancelRequestLivePhoto;
- (void)requestLivePhotoIfDownloadCompletedForPhoto:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishDownloadLivePhoto;
- (void)calculateLivePhotoDownloadProgress;
- (void)setLivePhotoVideoDownloadProgress:(float)arg1 receivedSize:(unsigned long long)arg2 expectedSize:(unsigned long long)arg3;
- (void)setLivePhotoImageDownloadProgress:(float)arg1 receivedSize:(unsigned long long)arg2 expectedSize:(unsigned long long)arg3;
- (void)finishDownloadLivePhotoVideo;
- (void)startDownloadLivePhotoVideoForPhoto:(id)arg1;
- (id)livePhotoVideoDownloadQueue;
- (void)finishDownloadLivePhotoImage;
- (void)startDownloadLivePhotoImageForPhoto:(id)arg1;
- (void)startLoadLivePhoto:(id)arg1;
- (_Bool)isLargeImageAvailableForPhoto:(id)arg1;
- (_Bool)isOriginalImageAvailableForPhoto:(id)arg1;
- (id)higherQualityURLIfAvailable:(long long)arg1 photo:(id)arg2;
- (id)imageURLWithHighQualitySettingForPhoto:(id)arg1;
- (id)imageURLWithNormalQualitySettingForPhoto:(id)arg1;
- (id)imageURLWithUserSettingForPhoto:(id)arg1;
- (id)validAndBlurIfNeededImageURL:(id)arg1 photo:(id)arg2;
- (void)fetchPaidInfoIfNeededThenLoadImageWithBlock:(CDUnknownBlockType)arg1;
- (void)startLoadStillImage:(id)arg1;
- (void)startLoadMessagePhoto:(id)arg1;
- (void)cancelLoad;
- (void)startLoad;
- (id)createAndConfigImageLoadRequestWithURLString:(id)arg1;
- (void)loadThumbnailImageIfNeededForPhoto:(id)arg1;
- (void)dealloc;
- (id)init;

@end

