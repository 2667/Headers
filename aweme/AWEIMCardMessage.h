//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEIMUser, AWEURLModel, NSString;

@interface AWEIMCardMessage : AWEIMMessage
{
    NSString *_uid;
    AWEIMUser *_user;
    NSString *_itemId;
    AWEURLModel *_coverURL;
    long long _coverHeight;
    long long _coverWidth;
    NSString *_contentName;
    AWEURLModel *_contentThumb;
}

@property(retain, nonatomic) AWEURLModel *contentThumb; // @synthesize contentThumb=_contentThumb;
@property(copy, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
@property(nonatomic) long long coverWidth; // @synthesize coverWidth=_coverWidth;
@property(nonatomic) long long coverHeight; // @synthesize coverHeight=_coverHeight;
@property(copy, nonatomic) AWEURLModel *coverURL; // @synthesize coverURL=_coverURL;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) AWEIMUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

