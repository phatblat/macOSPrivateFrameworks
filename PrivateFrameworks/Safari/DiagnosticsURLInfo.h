//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DiagnosticsURLInfo : NSObject
{
    NSString *_url;
    double _visitTime;
}

@property(readonly) double visitTime; // @synthesize visitTime=_visitTime;
@property(readonly) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)filteredDictionaryRepresentationExcludingURLs:(id)arg1;
- (id)initWithURL:(id)arg1 visitTime:(double)arg2;

@end
