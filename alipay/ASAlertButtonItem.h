//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface ASAlertButtonItem : UIButton
{
    _Bool _defaultRightLineVisible;
    NSString *_title;
    long long _type;
    CDUnknownBlockType _action;
}

@property(nonatomic) _Bool defaultRightLineVisible; // @synthesize defaultRightLineVisible=_defaultRightLineVisible;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
