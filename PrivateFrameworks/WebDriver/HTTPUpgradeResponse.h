//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse>
{
    NSString *token;
}

- (void).cxx_destruct;
- (long long)status;
- (id)httpHeaders;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)initWithToken:(id)arg1;

@end

