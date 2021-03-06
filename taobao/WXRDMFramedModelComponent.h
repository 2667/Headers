//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXRDMBaseEntityComponent.h"

@class EZEntity, EZFramedModel, EZSampleReader, EZStreamTexture, NSDictionary, NSString, WXRDMAudioUtil;

@interface WXRDMFramedModelComponent : WXRDMBaseEntityComponent
{
    _Bool _isFinishCallback;
    _Bool _isNeedAudio;
    _Bool _playing;
    _Bool _isLoop;
    _Bool _isAutoPlay;
    _Bool _isNeedForceUpdate;
    _Bool _isNeedChange;
    _Bool _isMute;
    _Bool _notifyReadyEvent;
    _Bool _notifyEndEvent;
    _Bool _notifyPlayEvent;
    int _geometryType;
    float _videoDuration;
    int _videoFrameRate;
    int _videoFrameCount;
    float _currentFrame;
    EZSampleReader *_reader;
    EZEntity *_modelEntity;
    EZStreamTexture *_videoTexture;
    EZFramedModel *_frameModel;
    NSDictionary *_modelSrc;
    double _downloadTimeStamp;
    NSString *_texturePath;
    NSString *_geometryPath;
    NSString *_audioPath;
    double _lastUpdateTime;
    WXRDMAudioUtil *_audioUtils;
}

+ (id)wx_export_method_79;
+ (id)wx_export_method_78;
+ (id)wx_export_method_77;
+ (id)wx_export_method_76;
+ (id)wx_export_method_75;
+ (id)wx_export_method_74;
+ (id)wx_export_method_73;
@property(retain, nonatomic) WXRDMAudioUtil *audioUtils; // @synthesize audioUtils=_audioUtils;
@property(nonatomic) _Bool notifyPlayEvent; // @synthesize notifyPlayEvent=_notifyPlayEvent;
@property(nonatomic) _Bool notifyEndEvent; // @synthesize notifyEndEvent=_notifyEndEvent;
@property(nonatomic) _Bool notifyReadyEvent; // @synthesize notifyReadyEvent=_notifyReadyEvent;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) _Bool isNeedChange; // @synthesize isNeedChange=_isNeedChange;
@property(nonatomic) _Bool isNeedForceUpdate; // @synthesize isNeedForceUpdate=_isNeedForceUpdate;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) _Bool isLoop; // @synthesize isLoop=_isLoop;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) float currentFrame; // @synthesize currentFrame=_currentFrame;
@property(nonatomic) int videoFrameCount; // @synthesize videoFrameCount=_videoFrameCount;
@property(nonatomic) int videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) float videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool isNeedAudio; // @synthesize isNeedAudio=_isNeedAudio;
@property(retain, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
@property(nonatomic) int geometryType; // @synthesize geometryType=_geometryType;
@property(retain, nonatomic) NSString *geometryPath; // @synthesize geometryPath=_geometryPath;
@property(retain, nonatomic) NSString *texturePath; // @synthesize texturePath=_texturePath;
@property(nonatomic) double downloadTimeStamp; // @synthesize downloadTimeStamp=_downloadTimeStamp;
@property(nonatomic) _Bool isFinishCallback; // @synthesize isFinishCallback=_isFinishCallback;
@property(retain, nonatomic) NSDictionary *modelSrc; // @synthesize modelSrc=_modelSrc;
@property(retain, nonatomic) EZFramedModel *frameModel; // @synthesize frameModel=_frameModel;
@property(retain, nonatomic) EZStreamTexture *videoTexture; // @synthesize videoTexture=_videoTexture;
@property(retain, nonatomic) EZEntity *modelEntity; // @synthesize modelEntity=_modelEntity;
@property(retain, nonatomic) EZSampleReader *reader; // @synthesize reader=_reader;
- (void).cxx_destruct;
- (void)mixValueFrom:(float)arg1 to:(float)arg2 animation:(id)arg3;
- (void)p_seekToIndex:(float)arg1;
- (_Bool)p_getVideoInfo;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)setMusicMute:(_Bool)arg1;
- (void)seekToTime:(long long)arg1;
- (void)seekToFrame:(long long)arg1;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)play:(long long)arg1;
- (void)p_loadEntity;
- (void)inner_loadEntity;
- (void)loadEntity;
- (void)setSrc:(id)arg1;
- (id)getValidModelSrc:(id)arg1;
- (_Bool)isNeedUpdateModelSrc:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)initAttributes;
- (void)clearFrameEntity;
- (void)clearEZObjects;
- (void)viewDidUnload;
- (void)viewDidLoad;

@end

