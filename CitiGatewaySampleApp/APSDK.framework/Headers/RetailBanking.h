//
//  RetailBanking.h
//  AnyPresence SDK
//

/*!
 @header RetailBanking
 @abstract RetailBanking class
 */

#import "APService.h"

/*!
 @class RetailBanking
 @abstract Contains configuration for the RetailBanking data source.
 */

@interface RetailBanking : APService

/*!
 @method setBaseURL:
 @abstract Sets base URL for the RetailBanking data source.
 @param url Base URL for RetailBanking.
 */
+ (void)setBaseURL:(NSURL *)url;

/*!
 @method setHTTPBasicAuthUsername:password:
 @abstract Sets HTTP Basic Auth info for the RetailBanking data source.
 @param username Username for RetailBanking.
 @param password Password for the username provided.
 */
+ (void)setHTTPBasicAuthUsername:(NSString *)username password:(NSString *)password;

/*!
 @method setSSLCertificate:
 @abstract Sets path to certificate associated with the RetailBanking data source.
 @param path Path to SSL certificate. (e.g. [[NSBundle mainBundle] pathForResource:@"MyCertificateName" ofType:@"cer"]).  This value must not be nil.
 @discussion Providing nil for a path is strictly prohibited.  Also please note that SSL pinning is incompatible with synchronous networking requests, so client code MUST use the asynchronous APIs.
 */
+ (void)setSSLCertificate:(NSString *)path;

/*!
 @method certificate
 @abstract Returns the certificate associated with RetailBanking.
 @result Binary representation of the certificate associate with RetailBanking.
 */
+ (NSData *)certificate;

/*!
 @method serializationFormat
 @abstract Returns the serialization format associated with RetailBanking.
 @result APSerializationFormat associated with RetailBanking.
 */
+ (enum APSerializationFormat)serializationFormat;

@end
