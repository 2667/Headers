//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMention.h"

@class NSString, WBStatus;

@interface MMMessageMention : WBMention
{
    WBStatus *_status;
    WBStatus *_parent_status;
    NSString *_pid;
}

+ (Class)quotedItemClass;
+ (Class)tableViewCellClass;
+ (Class)drawingContextClass;
+ (Class)textContentViewClass;
+ (Class)contentViewClass;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) WBStatus *parent_status; // @synthesize parent_status=_parent_status;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)commentNumberLimit;
- (_Bool)shouldShowImageIndicator;
- (id)briefQuotedItemText;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)accessibilityQuotedItemValue;
- (_Bool)shouldShowImages;

@end

