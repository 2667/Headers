//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoEditMenuView.h"

@class MPTWBSlider, UIButton, UILabel, UIView, WBMusicModel;

@interface WBVideoEditorMusicView : WBVideoEditMenuView
{
    WBMusicModel *_musicModel;
    CDUnknownBlockType _WBVideoEditorMusicViewAddBlock;
    CDUnknownBlockType _WBVideoEditorMusicViewEditBlock;
    CDUnknownBlockType _WBVideoEditorMusicViewAdjustVolumeBlock;
    CDUnknownBlockType _WBVideoEditorMusicViewDeleteBlock;
    UIView *_noMusicView;
    UIView *_hasMusicView;
    MPTWBSlider *_sliderYuanSheng;
    MPTWBSlider *_sliderYuanSheng_noMusic;
    MPTWBSlider *_sliderYinYue;
    UIView *_topContainView;
    UILabel *_musicTitleLabel;
    UILabel *_musicArtistLabel;
    UIButton *_editButton;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UILabel *musicArtistLabel; // @synthesize musicArtistLabel=_musicArtistLabel;
@property(retain, nonatomic) UILabel *musicTitleLabel; // @synthesize musicTitleLabel=_musicTitleLabel;
@property(retain, nonatomic) UIView *topContainView; // @synthesize topContainView=_topContainView;
@property(retain, nonatomic) MPTWBSlider *sliderYinYue; // @synthesize sliderYinYue=_sliderYinYue;
@property(retain, nonatomic) MPTWBSlider *sliderYuanSheng_noMusic; // @synthesize sliderYuanSheng_noMusic=_sliderYuanSheng_noMusic;
@property(retain, nonatomic) MPTWBSlider *sliderYuanSheng; // @synthesize sliderYuanSheng=_sliderYuanSheng;
@property(retain, nonatomic) UIView *hasMusicView; // @synthesize hasMusicView=_hasMusicView;
@property(retain, nonatomic) UIView *noMusicView; // @synthesize noMusicView=_noMusicView;
@property(copy, nonatomic) CDUnknownBlockType WBVideoEditorMusicViewDeleteBlock; // @synthesize WBVideoEditorMusicViewDeleteBlock=_WBVideoEditorMusicViewDeleteBlock;
@property(copy, nonatomic) CDUnknownBlockType WBVideoEditorMusicViewAdjustVolumeBlock; // @synthesize WBVideoEditorMusicViewAdjustVolumeBlock=_WBVideoEditorMusicViewAdjustVolumeBlock;
@property(copy, nonatomic) CDUnknownBlockType WBVideoEditorMusicViewEditBlock; // @synthesize WBVideoEditorMusicViewEditBlock=_WBVideoEditorMusicViewEditBlock;
@property(copy, nonatomic) CDUnknownBlockType WBVideoEditorMusicViewAddBlock; // @synthesize WBVideoEditorMusicViewAddBlock=_WBVideoEditorMusicViewAddBlock;
@property(retain, nonatomic) WBMusicModel *musicModel; // @synthesize musicModel=_musicModel;
- (void).cxx_destruct;
- (void)show:(_Bool)arg1;
- (void)sliderYinYueChange:(id)arg1;
- (void)sliderYuanShengChange:(id)arg1;
- (void)tapMusicDeleteButton;
- (void)tapMusicEditButton;
- (void)tapAddMusicButton;
- (void)initHasMusicViews;
- (void)initNoMusicViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

