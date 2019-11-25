//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JXHTTPRequestBody.h"

@class NSData, NSString;

@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody>
{
    NSData *_requestData;
}

+ (id)withJSONObject:(id)arg1;
+ (id)withString:(id)arg1;
+ (id)withData:(id)arg1;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void).cxx_destruct;
- (void)httpOperationDidFinishLoading:(id)arg1;
- (long long)httpContentLength;
- (id)httpContentType;
- (id)httpInputStream;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

