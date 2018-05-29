//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryOverlayViewBase.h"

#import "WBStoryImageStickersPickerViewDelegate-Protocol.h"

@class NSString, WBStoryImageStickersPickerView;
@protocol WBStoryOverlayImageStickerViewDelegate;

@interface WBStoryOverlayImageStickerView : WBStoryOverlayViewBase <WBStoryImageStickersPickerViewDelegate>
{
    id <WBStoryOverlayImageStickerViewDelegate> _delegate;
    WBStoryImageStickersPickerView *_pickerView;
    unsigned long long _businessType;
}

@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) WBStoryImageStickersPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <WBStoryOverlayImageStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imagePickerDidDismiss:(id)arg1;
- (void)imagePicker:(id)arg1 didPickSticker:(id)arg2;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (double)hiddenAnimationDuration;
- (double)displayAnimationDuration;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

