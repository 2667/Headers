//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface AccountMatchingCell : UITableViewCell
{
    UILabel *_accountLabel;
    UIImageView *_selectImageView;
    UIImageView *_bottomSeperatorView;
    double _textInset;
}

@property(nonatomic) double textInset; // @synthesize textInset=_textInset;
- (void).cxx_destruct;
- (void)configCell:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

