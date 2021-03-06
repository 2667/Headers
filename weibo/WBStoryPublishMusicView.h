//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryOverlayViewBase.h"

#import "WBStoryMusicPickerViewDelegate-Protocol.h"

@class NSString, WBStoryMusicItem, WBStoryMusicPickerView, WBStoryPickerPathLogger;
@protocol WBStoryPublishMusicViewDelegate;

@interface WBStoryPublishMusicView : WBStoryOverlayViewBase <WBStoryMusicPickerViewDelegate>
{
    id <WBStoryPublishMusicViewDelegate> _delegate;
    WBStoryMusicItem *_selectedItem;
    WBStoryMusicItem *_pendingItem;
    WBStoryMusicPickerView *_pickerView;
    WBStoryPickerPathLogger *_pathLogger;
}

@property(retain, nonatomic) WBStoryPickerPathLogger *pathLogger; // @synthesize pathLogger=_pathLogger;
@property(retain, nonatomic) WBStoryMusicPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) WBStoryMusicItem *pendingItem; // @synthesize pendingItem=_pendingItem;
@property(retain, nonatomic) WBStoryMusicItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) __weak id <WBStoryPublishMusicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)musicPickerViewDidDismiss:(id)arg1;
- (void)musicPickerView:(id)arg1 didSelectMusicItem:(id)arg2;
- (void)musicPickerView:(id)arg1 didTapMusicItem:(id)arg2;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (double)hiddenAnimationDuration;
- (double)displayAnimationDuration;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

