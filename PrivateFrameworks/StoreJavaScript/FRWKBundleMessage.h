//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface FRWKBundleMessage : NSObject <NSSecureCoding>
{
    NSString *_message;
    NSDictionary *_body;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 body:(id)arg2;

@end

