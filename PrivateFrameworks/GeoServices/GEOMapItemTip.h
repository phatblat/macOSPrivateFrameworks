//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject
{
    GEOPDTip *_geoTip;
}

@property(retain, nonatomic) GEOPDTip *geoTip; // @synthesize geoTip=_geoTip;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *tipId;
@property(readonly, nonatomic) BOOL hasTipId;
@property(readonly, nonatomic) NSString *bestImageURL;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) double tipTime;
@property(readonly, nonatomic) BOOL hasTipTime;
@property(readonly, nonatomic) NSString *localizedSnippet;
- (id)initWithGEOPDTip:(id)arg1;

@end

