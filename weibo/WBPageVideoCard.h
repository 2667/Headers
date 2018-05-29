//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString, WBVideoItem;

@interface WBPageVideoCard : WBPageCard
{
    float width;
    float height;
    int actStatus;
    WBVideoItem *mediaModel;
    NSString *picUrl;
    NSString *objectType;
    NSString *desc1;
    NSString *desc2;
}

+ (Class)viewClass;
@property(retain, nonatomic) NSString *desc2; // @synthesize desc2;
@property(retain, nonatomic) NSString *desc1; // @synthesize desc1;
@property(retain, nonatomic) NSString *objectType; // @synthesize objectType;
@property(nonatomic) int actStatus; // @synthesize actStatus;
@property(nonatomic) float height; // @synthesize height;
@property(nonatomic) float width; // @synthesize width;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(retain, nonatomic) WBVideoItem *mediaModel; // @synthesize mediaModel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getMusicModel;
- (id)getVideoModel;
- (_Bool)updateWithDictionary:(id)arg1;

@end

