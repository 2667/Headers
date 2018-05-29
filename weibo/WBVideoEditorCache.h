//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMediaEditorCache.h"

@class AVMutableComposition, NSArray, NSDictionary, NSNumber, NSString, UIImage;

@interface WBVideoEditorCache : WBMediaEditorCache
{
    _Bool _isEdited;
    _Bool _videoUploadDefinitionChanged;
    NSString *_videoCoverPath;
    double _videoCoverWidth;
    double _videoCoverHeight;
    NSString *_videoEditedPath;
    NSString *_videoBackupPath;
    AVMutableComposition *_videoComposition;
    long long _mvID;
    long long _musicID;
    NSArray *_videoTags;
    NSString *_videoTitle;
    NSString *_videoType;
    NSString *_videoEffectID;
    NSNumber *_photosCount;
    NSString *_videoSource;
    long long _videoUploadDefinition;
    NSDictionary *_editInfo;
    NSDictionary *_liveDetails;
    NSNumber *_videoSecondsDuration;
    NSString *_videoDuration;
    NSString *_videoSize;
}

+ (id)videoCompositionWithClips:(id)arg1;
+ (id)cropVideoCompositionWithAsset:(id)arg1 withCropTimeRange:(CDStruct_e83c9415)arg2;
+ (id)cropVideoCompositionWith:(id)arg1 withCropTimeRange:(CDStruct_e83c9415)arg2;
@property(copy, nonatomic) NSString *videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSNumber *videoSecondsDuration; // @synthesize videoSecondsDuration=_videoSecondsDuration;
@property(retain, nonatomic) NSDictionary *liveDetails; // @synthesize liveDetails=_liveDetails;
@property(retain, nonatomic) NSDictionary *editInfo; // @synthesize editInfo=_editInfo;
@property(nonatomic) _Bool videoUploadDefinitionChanged; // @synthesize videoUploadDefinitionChanged=_videoUploadDefinitionChanged;
@property(nonatomic) long long videoUploadDefinition; // @synthesize videoUploadDefinition=_videoUploadDefinition;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(retain, nonatomic) NSNumber *photosCount; // @synthesize photosCount=_photosCount;
@property(copy, nonatomic) NSString *videoEffectID; // @synthesize videoEffectID=_videoEffectID;
@property(copy, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(copy, nonatomic) NSArray *videoTags; // @synthesize videoTags=_videoTags;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(nonatomic) long long musicID; // @synthesize musicID=_musicID;
@property(nonatomic) long long mvID; // @synthesize mvID=_mvID;
@property(retain, nonatomic) AVMutableComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(copy, nonatomic) NSString *videoBackupPath; // @synthesize videoBackupPath=_videoBackupPath;
@property(copy, nonatomic) NSString *videoEditedPath; // @synthesize videoEditedPath=_videoEditedPath;
@property(nonatomic) double videoCoverHeight; // @synthesize videoCoverHeight=_videoCoverHeight;
@property(nonatomic) double videoCoverWidth; // @synthesize videoCoverWidth=_videoCoverWidth;
@property(copy, nonatomic) NSString *videoCoverPath; // @synthesize videoCoverPath=_videoCoverPath;
- (void).cxx_destruct;
- (void)clean;
- (_Bool)needHDVideoSetting;
- (_Bool)isSameResource:(id)arg1;
- (id)filePath;
- (id)createType;
@property(readonly, copy, nonatomic) NSString *fullScreenPath;
@property(readonly, nonatomic) UIImage *fullScreenImage;
@property(readonly, nonatomic) UIImage *thumbnail;
- (_Bool)isSameCache:(id)arg1;
- (id)videoFirstClipPath;
- (_Bool)filePathAvailbale;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;
- (void)setOriginalDict:(id)arg1;
- (void)setOriginalPHAsset:(id)arg1;
- (void)setOriginalAsset:(id)arg1;
- (id)mediaThumbnailImage;
- (long long)mediaType;
- (void)setupObjectForCopy:(id)arg1;
- (void)resetFileInfo;
- (void)dealloc;

@end

