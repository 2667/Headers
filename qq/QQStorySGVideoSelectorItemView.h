//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, QQStorySGVideoSelectorItemModel, QQStoryUrlImageView, TBStoryVideoVoteView, UIButton;
@protocol QQStorySGVideoSelectorItemViewDelegate;

@interface QQStorySGVideoSelectorItemView : UIView
{
    QQStoryUrlImageView *_videoCoverView;
    CAShapeLayer *_maskLayer;
    UIButton *_checkBox;
    QQStorySGVideoSelectorItemModel *_model;
    unsigned long long _itemIndex;
    id <QQStorySGVideoSelectorItemViewDelegate> _delegate;
    TBStoryVideoVoteView *_voteView;
}

@property(retain, nonatomic) TBStoryVideoVoteView *voteView; // @synthesize voteView=_voteView;
@property(nonatomic) id <QQStorySGVideoSelectorItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) QQStorySGVideoSelectorItemModel *model; // @synthesize model=_model;
- (void)updateVoteView;
- (void)checkBoxClicked:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)setDefaultCover;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

