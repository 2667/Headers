//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WKTemplateModel : NSObject
{
    NSDictionary *_templateData;
    NSString *_tplId;
    NSString *_time;
    NSString *_tag;
    NSString *_data;
    NSString *_version;
    NSString *_tplVersion;
}

@property(retain, nonatomic) NSString *tplVersion; // @synthesize tplVersion=_tplVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *tplId; // @synthesize tplId=_tplId;
- (void).cxx_destruct;
- (id)description;

@end

