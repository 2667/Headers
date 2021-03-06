//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQFilterConfigModel : NSObject
{
    _Bool _preDownload;
    _Bool _isDownloading;
    long long _filterId;
    NSString *_iconMd5;
    NSString *_iconUrl;
    NSString *_md5;
    NSString *_name;
    NSString *_resUrl;
    long long _subId;
    double _progress;
    NSString *_display;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) long long subId; // @synthesize subId=_subId;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(nonatomic) _Bool preDownload; // @synthesize preDownload=_preDownload;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *iconMd5; // @synthesize iconMd5=_iconMd5;
@property(nonatomic) long long filterId; // @synthesize filterId=_filterId;
- (void).cxx_destruct;
- (id)toMCTmplItemWithPath:(id)arg1;
- (_Bool)isEmpty;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInfo:(id)arg1;

@end

