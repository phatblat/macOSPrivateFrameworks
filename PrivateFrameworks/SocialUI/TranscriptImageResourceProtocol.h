//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface TranscriptImageResourceProtocol : NSURLProtocol
{
    int _previousScaleFactor;
    long long _previousMax;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)transcriptProtocolScheme;
+ (void)shouldRegisterProtocol:(BOOL)arg1;
@property long long previousMax; // @synthesize previousMax=_previousMax;
@property int previousScaleFactor; // @synthesize previousScaleFactor=_previousScaleFactor;
- (id)_requestResourceDataFromURL:(id)arg1;
- (id)requestResourceDataFromURL:(id)arg1;
- (void)stopLoading;
- (void)startLoading;

@end

