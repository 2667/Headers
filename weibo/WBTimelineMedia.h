//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBTimelineMedia : WBModelObject
{
    NSString *picture;
    NSString *fid;
    NSString *type;
    NSString *hdUrl;
    NSString *ldUrl;
    NSString *_localUrl;
    NSString *_localClipVideoUrl;
}

+ (id)mediasWithInfos:(id)arg1;
+ (id)multiMediaDictionarys:(id)arg1;
+ (id)mediaWithInfo:(id)arg1;
@property(retain, nonatomic) NSString *localClipVideoUrl; // @synthesize localClipVideoUrl=_localClipVideoUrl;
@property(retain, nonatomic) NSString *localUrl; // @synthesize localUrl=_localUrl;
@property(retain, nonatomic) NSString *ldUrl; // @synthesize ldUrl;
@property(retain, nonatomic) NSString *hdUrl; // @synthesize hdUrl;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *fid; // @synthesize fid;
@property(retain, nonatomic) NSString *picture; // @synthesize picture;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (_Bool)isValid;

@end

