//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOKerberosCredential : NSObject
{
    unsigned int _lifetime;
    NSString *_name;
    NSString *_uuid;
}

@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property unsigned int lifetime; // @synthesize lifetime=_lifetime;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end

