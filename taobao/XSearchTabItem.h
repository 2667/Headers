//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchJSONModel.h"

@class NSString, XSearchTabAction, XSearchTabShow;

@interface XSearchTabItem : XSearchJSONModel
{
    _Bool _selected;
    NSString *_bizName;
    XSearchTabShow *_show;
    XSearchTabAction *_tabAction;
}

+ (_Bool)strictMode;
@property(retain, nonatomic) XSearchTabAction *tabAction; // @synthesize tabAction=_tabAction;
@property(retain, nonatomic) XSearchTabShow *show; // @synthesize show=_show;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
- (void).cxx_destruct;
- (id)supportTypes;
- (_Bool)isValid;

@end

