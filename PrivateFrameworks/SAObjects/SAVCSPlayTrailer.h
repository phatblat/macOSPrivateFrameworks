//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSPlayTrailer : SAAceView
{
}

+ (id)playTrailerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playTrailer;
@property(copy, nonatomic) NSString *utsId;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSURL *lowresTrailerUri;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSURL *hiresTrailerUri;
@property(copy, nonatomic) NSString *contentType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

