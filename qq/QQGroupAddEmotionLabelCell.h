//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QQGroupEmotionLabel, UILabel;

@interface QQGroupAddEmotionLabelCell : UITableViewCell
{
    QQGroupEmotionLabel *_contentLabel;
    _Bool _useEmotionLabel;
    int _xo;
    UILabel *_moreTextLabel;
}

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 WithEmotionLabel:(_Bool)arg3;

// Remaining properties
@property(retain, nonatomic) QQGroupEmotionLabel *contentLabel; // @dynamic contentLabel;
@property(nonatomic) _Bool useEmotionLabel; // @dynamic useEmotionLabel;

@end
