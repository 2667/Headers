//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TTAsyncLabel, TTLiveMessage;

@interface TTLiveHostTipCell : UITableViewCell
{
    TTAsyncLabel *_tipLabel;
    TTLiveMessage *_tipMessage;
}

@property(retain, nonatomic) TTLiveMessage *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(retain, nonatomic) TTAsyncLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)setupViewWithHost:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
