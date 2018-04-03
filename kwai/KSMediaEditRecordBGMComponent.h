//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LYWComponent.h"

#import "KSBackgroundMusicRecorderViewDelegate-Protocol.h"
#import "KSMediaEditActivity-Protocol.h"

@class KSAudioRecorder, KSBackgroundMusicRecorderView, KSMPreviewPlayer, KSMediaEditActivityController, NSObject, NSString;
@protocol KSVideoPlayer;

@interface KSMediaEditRecordBGMComponent : LYWComponent <KSBackgroundMusicRecorderViewDelegate, KSMediaEditActivity>
{
    float _fps;
    KSBackgroundMusicRecorderView *_backgroundMusicRecorderView;
    NSObject<KSVideoPlayer> *_player;
    KSAudioRecorder *_audioRecorder;
    NSString *_editSource;
    KSMediaEditActivityController *_activityController;
    KSMPreviewPlayer *_mediaPlayer;
    unsigned long long _selectedTab;
    NSString *_maxRecordDurationUUID;
}

@property(retain, nonatomic) NSString *maxRecordDurationUUID; // @synthesize maxRecordDurationUUID=_maxRecordDurationUUID;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(retain, nonatomic) KSMPreviewPlayer *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(nonatomic) __weak KSMediaEditActivityController *activityController; // @synthesize activityController=_activityController;
@property(retain, nonatomic) NSString *editSource; // @synthesize editSource=_editSource;
@property(nonatomic) float fps; // @synthesize fps=_fps;
@property(retain, nonatomic) KSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<KSVideoPlayer> *player; // @synthesize player=_player;
@property(retain, nonatomic) KSBackgroundMusicRecorderView *backgroundMusicRecorderView; // @synthesize backgroundMusicRecorderView=_backgroundMusicRecorderView;
- (void).cxx_destruct;
- (void)_updateMaxRecordDurationWitNewState:(id)arg1;
- (void)_setupRecordViewIfNeed:(id)arg1;
- (void)_startRecordIfNeed:(id)arg1;
- (void)_setPlayerIfNeed:(id)arg1;
- (void)_setEditSourceIfNeed:(id)arg1;
- (void)backToAudioComponent;
- (_Bool)activityShouldDismiss;
- (_Bool)activityTapBackgroundToDismiss;
- (_Bool)activityHasToolbar;
- (void)activityDidFinish;
- (void)activityDidCancel;
- (void)activityWillShow;
- (double)activityHeight;
- (void)activityDidRemovedFromController:(id)arg1;
- (void)activityDidAddedToController:(id)arg1;
- (void)didTapDoneButtonWithRecordTime:(double)arg1;
- (void)didPauseRecord;
- (void)didStartRecord;
- (void)didTapCloseRecordButton;
- (void)didTapCancelRecordButton;
- (void)newState:(id)arg1;
- (void)_updateMaxRecordDuration:(id)arg1;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

