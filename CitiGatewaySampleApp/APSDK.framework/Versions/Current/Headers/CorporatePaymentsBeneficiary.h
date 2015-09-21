//
//  CorporatePaymentsBeneficiary.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsBeneficiary
 @abstract CorporatePaymentsBeneficiary class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CorporatePaymentsBeneficiary
 @abstract Generated model object: CorporatePaymentsBeneficiary.
 @discussion Use @link //apple_ref/occ/cat/CorporatePaymentsBeneficiary(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CorporatePaymentsBeneficiary/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CorporatePaymentsBeneficiary : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CorporatePaymentsBeneficiary.
 @result Class representing the data source associated with a CorporatePaymentsBeneficiary.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var accountStatus
 @abstract Generated model property: account_status.
 */
@property (nonatomic, strong) NSString * accountStatus;

/*!
 @var address
 @abstract Generated model property: address.
 */
@property (nonatomic, strong) NSDictionary * address;

/*!
 @var bankAccountType
 @abstract Generated model property: bank_account_type.
 */
@property (nonatomic, strong) NSString * bankAccountType;

/*!
 @var bankAddress
 @abstract Generated model property: bank_address.
 */
@property (nonatomic, strong) NSString * bankAddress;

/*!
 @var bankCountry
 @abstract Generated model property: bank_country.
 */
@property (nonatomic, strong) NSString * bankCountry;

/*!
 @var bic
 @abstract Generated model property: bic.
 */
@property (nonatomic, strong) NSString * bic;

/*!
 @var companyName
 @abstract Generated model property: company_name.
 */
@property (nonatomic, strong) NSString * companyName;

/*!
 @var country
 @abstract Generated model property: country.
 */
@property (nonatomic, strong) NSString * country;

/*!
 @var currency
 @abstract Generated model property: currency.
 */
@property (nonatomic, strong) NSString * currency;

/*!
 @var entityType
 @abstract Generated model property: entity_type.
 */
@property (nonatomic, strong) NSString * entityType;

/*!
 @var iban
 @abstract Generated model property: iban.
 */
@property (nonatomic, strong) NSString * iban;

/*!
 @var routingCode
 @abstract Generated model property: routing_code.
 */
@property (nonatomic, strong) NSString * routingCode;

@end
