//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface GEORequestCounterProactiveTileDownloadInfo : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_policies;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *policies; // @synthesize policies=_policies;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 policies:(id)arg2;

@end

