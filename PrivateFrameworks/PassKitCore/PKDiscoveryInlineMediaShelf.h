//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKDiscoveryShelf.h>

@class NSString, PKDiscoveryMedia;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf
{
    PKDiscoveryMedia *_media;
    NSString *_captionKey;
    long long _displayType;
    NSString *_localizedCaption;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *localizedCaption; // @synthesize localizedCaption=_localizedCaption;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NSString *captionKey; // @synthesize captionKey=_captionKey;
@property(readonly, nonatomic) PKDiscoveryMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
