//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, WGGiftbagInfo, WGProgressImageView;
@protocol WGGiftbagDetailTopDelegate;

@interface WGGiftbagDetailTopCell : WGBaseTableViewCell
{
    int _activityState;
    UIImageView *_headImage;
    UILabel *_title;
    UILabel *_subTitle;
    UIButton *_playBtn;
    WGProgressImageView *_progressView;
    UILabel *_progressLabel;
    WGGiftbagInfo *_giftbagDetailInfo;
    id <WGGiftbagDetailTopDelegate> _delegate;
    UIImageView *_colorprogressView;
}

@property(retain, nonatomic) UIImageView *colorprogressView; // @synthesize colorprogressView=_colorprogressView;
@property(nonatomic) id <WGGiftbagDetailTopDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WGGiftbagInfo *giftbagDetailInfo; // @synthesize giftbagDetailInfo=_giftbagDetailInfo;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) WGProgressImageView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) int activityState; // @synthesize activityState=_activityState;
- (void).cxx_destruct;
- (void)giftbagDetailTopPlayBtnAction:(id)arg1;
- (void)configCell:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

