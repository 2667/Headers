//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WBMessagesTableViewSectionHeaderView : UIView
{
    double _groupTime;
    NSString *_groupTimeString;
    UILabel *_textView;
}

@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *groupTimeString; // @synthesize groupTimeString=_groupTimeString;
@property(nonatomic) double groupTime; // @synthesize groupTime=_groupTime;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

