//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol SISchemaDeviceFixedContext <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *speechID;
@property(copy, nonatomic) NSString *siriDeviceID;
@property(copy, nonatomic) NSString *systemLocale;
@property(copy, nonatomic) NSString *siriVoiceLanguage;
@property(copy, nonatomic) NSString *siriInputLanguage;
@property(copy, nonatomic) NSString *systemBuild;
@property(copy, nonatomic) NSString *deviceType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

