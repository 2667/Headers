//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, NSMutableDictionary, NSString, UIImage;

@interface WBStoryVideoExportConfig : NSObject
{
    _Bool _needWaterMark;
    _Bool _mute;
    _Bool _isSend;
    AVAsset *_video;
    double _videoVolume;
    AVAsset *_audio;
    double _audioVolume;
    unsigned long long _audioStartTime;
    UIImage *_image;
    UIImage *_stickersImage;
    unsigned long long _filterType;
    NSString *_statisticUUID;
    NSString *_businessType;
    unsigned long long _cameraMode;
    NSMutableDictionary *_inputInfo;
}

@property(retain, nonatomic) NSMutableDictionary *inputInfo; // @synthesize inputInfo=_inputInfo;
@property(nonatomic) _Bool isSend; // @synthesize isSend=_isSend;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(retain, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *statisticUUID; // @synthesize statisticUUID=_statisticUUID;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool needWaterMark; // @synthesize needWaterMark=_needWaterMark;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) UIImage *stickersImage; // @synthesize stickersImage=_stickersImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long audioStartTime; // @synthesize audioStartTime=_audioStartTime;
@property(nonatomic) double audioVolume; // @synthesize audioVolume=_audioVolume;
@property(retain, nonatomic) AVAsset *audio; // @synthesize audio=_audio;
@property(nonatomic) double videoVolume; // @synthesize videoVolume=_videoVolume;
@property(retain, nonatomic) AVAsset *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (id)sourceURL;
- (id)init;

@end

