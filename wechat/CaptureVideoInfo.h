//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EditVideoAttr, MMImageExifLogInfo, NSString, VideoUploadStatInfo;

@interface CaptureVideoInfo : NSObject
{
    NSString *thumb_path;
    NSString *video_path;
    unsigned int video_time;
    unsigned int video_size;
    unsigned int thumb_size;
    unsigned int m_uiVideoOffset;
    _Bool front_camera;
    unsigned int m_uiVideoSource;
    _Bool m_bForward;
    NSString *m_nsMsgDataUrl;
    NSString *m_nsAesKey;
    NSString *m_nsStreamVideoUrl;
    unsigned int m_uiStreamVideoTime;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    NSString *m_nsStatExtStr;
    NSString *m_msgSource;
    unsigned int thumb_width;
    unsigned int thumb_height;
    unsigned int video_width;
    unsigned int video_height;
    _Bool _isEdited;
    unsigned int _m_forwardType;
    unsigned int _m_uiContinueUploadCount;
    unsigned int _m_uiPercent;
    NSString *_video_assetId;
    NSString *_m_md5;
    NSString *_m_newMd5;
    VideoUploadStatInfo *_m_statInfo;
    EditVideoAttr *_editVideoAttr;
    MMImageExifLogInfo *_exifLogInfo;
    NSString *_m_nsAttachFileKey;
}

+ (int)getVideoDurationForAsset:(id)arg1;
+ (id)genVideoInfoWithVideoUrl:(id)arg1 thumb:(id)arg2;
@property(nonatomic) unsigned int m_uiPercent; // @synthesize m_uiPercent=_m_uiPercent;
@property(nonatomic) unsigned int m_uiContinueUploadCount; // @synthesize m_uiContinueUploadCount=_m_uiContinueUploadCount;
@property(retain, nonatomic) NSString *m_nsAttachFileKey; // @synthesize m_nsAttachFileKey=_m_nsAttachFileKey;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) VideoUploadStatInfo *m_statInfo; // @synthesize m_statInfo=_m_statInfo;
@property(retain, nonatomic) NSString *m_newMd5; // @synthesize m_newMd5=_m_newMd5;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5=_m_md5;
@property(nonatomic) unsigned int m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(retain, nonatomic) NSString *video_assetId; // @synthesize video_assetId=_video_assetId;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(nonatomic) unsigned int video_height; // @synthesize video_height;
@property(nonatomic) unsigned int video_width; // @synthesize video_width;
@property(nonatomic) unsigned int thumb_height; // @synthesize thumb_height;
@property(nonatomic) unsigned int thumb_width; // @synthesize thumb_width;
@property(retain, nonatomic) NSString *m_msgSource; // @synthesize m_msgSource;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(nonatomic) _Bool m_bForward; // @synthesize m_bForward;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) _Bool front_camera; // @synthesize front_camera;
@property(nonatomic) unsigned int m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned int thumb_size; // @synthesize thumb_size;
@property(nonatomic) unsigned int video_size; // @synthesize video_size;
@property(nonatomic) unsigned int video_time; // @synthesize video_time;
@property(retain, nonatomic) NSString *video_path; // @synthesize video_path;
@property(retain, nonatomic) NSString *thumb_path; // @synthesize thumb_path;
- (void).cxx_destruct;
- (id)init;

@end

