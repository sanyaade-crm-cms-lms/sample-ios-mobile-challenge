//
//  CapitalMarketsTrading.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsTrading
 @abstract CapitalMarketsTrading class
 */

#import "APService.h"

/*!
 @class CapitalMarketsTrading
 @abstract Contains configuration for the CapitalMarketsTrading data source.
 */

@interface CapitalMarketsTrading : APService

/*!
 @method setBaseURL:
 @abstract Sets base URL for the CapitalMarketsTrading data source.
 @param url Base URL for CapitalMarketsTrading.
 */
+ (void)setBaseURL:(NSURL *)url;

/*!
 @method setHTTPBasicAuthUsername:password:
 @abstract Sets HTTP Basic Auth info for the CapitalMarketsTrading data source.
 @param username Username for CapitalMarketsTrading.
 @param password Password for the username provided.
 */
+ (void)setHTTPBasicAuthUsername:(NSString *)username password:(NSString *)password;

/*!
 @method setSSLCertificate:
 @abstract Sets path to certificate associated with the CapitalMarketsTrading data source.
 @param path Path to SSL certificate. (e.g. [[NSBundle mainBundle] pathForResource:@"MyCertificateName" ofType:@"cer"]).  This value must not be nil.
 @discussion Providing nil for a path is strictly prohibited.  Also please note that SSL pinning is incompatible with synchronous networking requests, so client code MUST use the asynchronous APIs.
 */
+ (void)setSSLCertificate:(NSString *)path;

/*!
 @method certificate
 @abstract Returns the certificate associated with CapitalMarketsTrading.
 @result Binary representation of the certificate associate with CapitalMarketsTrading.
 */
+ (NSData *)certificate;

/*!
 @method serializationFormat
 @abstract Returns the serialization format associated with CapitalMarketsTrading.
 @result APSerializationFormat associated with CapitalMarketsTrading.
 */
+ (enum APSerializationFormat)serializationFormat;

@end
