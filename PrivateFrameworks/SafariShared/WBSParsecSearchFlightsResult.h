//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecLegacySearchResult.h>

#import "WBSParsecSearchFlightsResult.h"

@class SFFlight, WBSParsecFlightFetcher;

@interface WBSParsecSearchFlightsResult : WBSParsecLegacySearchResult <WBSParsecSearchFlightsResult>
{
    WBSParsecFlightFetcher *_flightFetcher;
}

+ (id)_specializedSchema;
- (void).cxx_destruct;
- (void)getFlight:(id *)arg1 selectedLegIndex:(unsigned long long *)arg2;
@property unsigned long long selectedLegIndex;
@property(readonly) SFFlight *sfFlight;
- (void)setSfSearchResultValue:(id)arg1;

@end

