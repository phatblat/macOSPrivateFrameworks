//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPDAssociatedApp, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOAssociatedApp : NSObject
{
    GEOPDAssociatedApp *_geoAssociatedApp;
}

@property(retain, nonatomic) GEOPDAssociatedApp *geoAssociatedApp; // @synthesize geoAssociatedApp=_geoAssociatedApp;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *alternateAppAdamIds;
@property(readonly, nonatomic) NSString *preferredAppAdamId;
@property(readonly, nonatomic) BOOL hasPreferredAppAdamId;
- (id)initWithGEOPDAssociatedApp:(id)arg1;

@end

