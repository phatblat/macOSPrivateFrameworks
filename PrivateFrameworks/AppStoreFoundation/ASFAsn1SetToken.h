//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreFoundation/ASFAsn1Token.h>

__attribute__((visibility("hidden")))
@interface ASFAsn1SetToken : ASFAsn1Token
{
    const char *mReadPointer;
}

- (id)nextToken;
- (void)reset;
- (id)description;
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(BOOL)arg5;

@end

