//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryMessage.h>

@class MCMessageHeaders, MFIMAPAccount;

@interface MFLibraryIMAPMessage : MFLibraryMessage
{
    MCMessageHeaders *_headers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MFIMAPAccount *account;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)setHeaders:(id)arg1;
- (id)headersFetchIfNotAvailable:(BOOL)arg1;

@end

