//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface EWServiceTypeCell : UITableViewCell
{
    unsigned long long _level;
    UIImageView *_checkbox;
    UIImageView *_arrowbox;
}

@property(retain, nonatomic) UIImageView *arrowbox; // @synthesize arrowbox=_arrowbox;
@property(retain, nonatomic) UIImageView *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)setChecked:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
